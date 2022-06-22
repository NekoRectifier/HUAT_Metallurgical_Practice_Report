#include <math.h>
#include <stdio.h>


double jisuan(int a, int b, double c, double d) {
  double t1, t2, t3, t4, t;
  t1 = b * c;
  t2 = a * d;
  t3 = d * d * c;
  t4 = c * c * d;
  t = 2 * 3.14 * (t1 - t2) / (t3 - t4);
  return t;
}

double jishuanj(double a, double b) {
  double m, j, r, g;

  m = 0.0534;
  r = 0.025;
  g = 9.8;

  j = m * r * (g - r * b) / (b - a);
  printf("平均转动惯量%0.4lf", j);
  return 0.0;
}

int main() {
  double data1[8], data2[8];
  double jieguo1[4], jieguo2[4];
  int i;
  double qiuhe1 = 0, qiuhe2 = 0;
  double pingjun1, pingjun2;

  printf("请输入第一组数据\n");
  for (i = 0; i < 8; i++) {
    scanf("%lf", &data1[i]);
  }
  printf("请输入第二组数据\n");
  for (i = 0; i < 8; i++) {
    scanf("%lf", &data2[i]);
  }

  for (i = 0; i < 4; i++) {
    jieguo1[i] = jisuan(i + 1, i + 5, data1[i], data1[i + 4]);
    jieguo2[i] = jisuan(i + 1, i + 5, data2[i], data2[i + 4]);
  }

  for (i = 0; i < 4; i++) {
    printf("第一组角加速度%d  %0.4lf\n", i + 1, jieguo1[i]);

    qiuhe1 = qiuhe1 + jieguo1[i];
  }
  pingjun1 = qiuhe1 * 0.25;
  printf("\n");
  printf("第一组平均角加速度%0.4lf", pingjun1);

  printf("\n");
  printf("\n");

  for (i = 0; i < 4; i++) {
    printf("第二组角加速度%d  %0.4lf\n", i + 1, jieguo2[i]);
    qiuhe2 = qiuhe2 + jieguo2[i];
  }
  pingjun2 = qiuhe2 * 0.25;
  printf("\n");
  printf("平均角加速度%0.4lf\n", pingjun2);

  jishuanj(pingjun1, pingjun2);

  return 0;
}
