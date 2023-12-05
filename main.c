#include <limits.h>
#include "ft_printf.h"

// int main(void)
// {
//      printf("-------------- test pour pointeurs --------\n");

//      void *p1;
//      int un;
//      p1 = &un;
//      un = 0;
//      int count_p1 = ft_printf("ftprintf %p\n", p1);
//      int count_p2 = printf("reprintf %p\n", p1);
//      printf("count_pointer for ftprint is %d\n count_pointer for printf is %d\n",count_p1, count_p2);

//      int count_p3 = ft_printf("ftprintf %p\n", -1);
//      int count_p4 = printf("reprintf %p\n", -1);
//      printf("count_pointer for ftprint is %d\n count_pointer for printf is %d\n",count_p3, count_p4);

//      int count_p5 = ft_printf("ftprintf %p\n", 0);
//      int count_p6 = printf("reprintf %p\n", 0);
//      printf("count_pointer for ftprint is %d\n count_pointer for printf is %d\n",count_p5, count_p6);

//      printf("-------------- test positive hexadecimal --------\n");

//      int x1;
//      x1 = 43;

//      int countx1 = ft_printf("positive x1 - falsf = %x\n", x1);
//      int countx2 = printf("positive x1 - realf = %x\n", x1);
//      printf("count_x_pos for ftprint is %d\n count_x_pos for printf is %d\n",countx1, countx2);

//      printf("-------------- test negative hexadecimal --------\n");

//      int x2;
//      x2 = -43;
//      int countx3 = ft_printf("negative x3 - falsf %x\n", x2);
//      int countx4 = printf("negative x4 - realf %x\n", x2);
//      printf("count_x_neg for ftprint is %d\n count_x_neg for printf is %d\n",countx3, countx4);

//      printf("-------------- test positive upper hexadecimal --------\n");

//      int X1;
//      X1 = 43;

//      int countX1 = ft_printf("positive x1 - falsf = %X\n", X1);
//      int countX2 = printf("positive x1 - realf = %X\n", X1);
//      printf("count_x_pos for ftprint is %d\n count_x_pos for printf is %d\n",countX1, countX2);

//      printf("-------------- test negative upper hexadecimal --------\n");

//      int X2;
//      X2 = -43;
//      int countX3 = ft_printf("negative x3 - falsf %X\n", X2);
//      int countX4 = printf("negative x4 - realf %X\n", X2);
//      printf("count_x_neg for ftprint is %d\n count_x_neg for printf is %d\n",countX3, countX4);

//                      printf("-------------- test pour int  negative--------\n");
//      int i1;
//      i1 = -500;

//      int counti1 = ft_printf("i - falsf = %i\n", i1);
//      int counti2 = printf("i - realf = %i\n", i1);
//      printf("count_i_pos for ftprint is %d\n count_i_pos for printf is %d\n",counti1, counti2);

//                      printf("-------------- test pour int  min--------\n");

//      int counti3 = ft_printf("i - falsf = %i\n", INT_MIN);
//      int counti4 = printf("i - realf = %i\n", INT_MIN);
//      printf("count_i_pos for ftprint is %d\n count_i_pos for printf is %d\n",counti3, counti4);

//                      printf("-------------- test pour unsigned u--------\n");
//      int u1;
//      u1 = 100;

//      int countu1 = ft_printf("u - falsf = %u\n", u1);
//      int countu2 = printf("u - realf = %u\n", u1);
//      printf("count_i_pos for ftprint is %d\n count_i_pos for printf is %d\n",countu1, countu2);

// //    printf("-------------- test avec decall --------\n");
// //
// //    ft_printf("ftprintf %-5%");
// //    printf("printf %-5%");
// //    printf("count_i_neg for ftprint is %d\n count_i_neg for printf is %d\n",count_i3, count_i4);

//      printf("-------------- test pour array --------\n");
//      char *s3 = "123456789";
//      char *s4 = "";
//      int count_char1 = ft_printf("falsf s = %s\n", s3);
//      int count_char2 = printf("realf s = %s\n", s3);
//      printf("count_char for ftprint is %d\n count_char for printf is %d\n",count_char1, count_char2);
//      int count_char3 = ft_printf("falsf s = %s\n", s4);
//      int count_char4 = printf("realf s = %s\n", s4);
//      printf("count_char for ftprint is %d\n count_char for printf is %d\n",count_char3, count_char4);

//      printf("-------------- test CAS SPECIAUX --------\n");
//      int i_min = -2147483648;
//      char *s_NULL = "";
//      int *p_null = NULL;
//      int d_0 = 0;

//      ft_printf("ftprintf is i : %i - s : %s - p : %p - d : %d\n", i_min, s_NULL,p_null, d_0);
//      ft_printf("printf__ is i : %i - s : %s - p : %p - d : %d\n", i_min, s_NULL,p_null, d_0);

//      printf("-------------- test TOTAL --------\n");
//      char c1 = 'a';
//      int d1 = 50;
//      ft_printf("ftprintf is %c - %s - %p - %d - %i - %u - %x - %X - %%\n", c1,s3, p1, d1, i1, u1, x1, X1);
//      ft_printf("printf__ is %c - %s - %p - %d - %i - %u - %x - %X - %%\n", c1,s3, p1, d1, i1, u1, x1, X1);

//      printf("-------------- test conversion identiques --------\n");

//      char *s_identique1 = "123456789";
//      char *s_identique2 = "123456789";
//      int x_identique1 = 43;
//      int x_identique2 = 43;
//      ft_printf("ftprintf is %s - %s - %x - %x\n", s_identique1, s_identique2,x_identique1, x_identique2);
//      ft_printf("printf__ is %s - %s - %x - %x\n", s_identique1, s_identique2,x_identique1, x_identique2);

//      printf("-------------- test du pourcent --------\n");

//      ft_printf("ft is %\n");
//      printf("pr is %\n");
//      printf("%d", ft_printf("%\n"));
//      printf("%d", printf("%\n"));

//      return (0);
// }

int  main(void)
{
     close(0);
     int arr = ft_printf("%d", 12310311);
     char oui = arr + 48;
     write(1, &oui, 1);
}
       
