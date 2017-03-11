#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n ;
    int caseno=0;
    while(scanf("%lld", &n)==1)
    {
        printf("%4d.",++caseno);
        if(n==0) { puts(" 0");  continue; }
        if((n/100000000000000)!=0)
          { printf(" %lld kuti", n/100000000000000); n = n%100000000000000; if(n<10000000) printf(" kuti"); }
        if((n/1000000000000)!=0)
          { printf(" %lld lakh", n/1000000000000);  n = n%1000000000000; if(n<10000000) printf(" kuti");}
        if((n/10000000000)!=0)
          { printf(" %lld hajar", n/10000000000); n = n%10000000000; if(n<10000000) printf(" kuti");}
        if((n/1000000000)!=0)
          { printf(" %lld shata", n/1000000000); n = n%1000000000;  if(n<10000000) printf(" kuti");}
        if((n/10000000)!=0)
          { printf(" %lld kuti", n/10000000); n = n%10000000;  }
        if((n/100000)!=0)
          { printf(" %lld lakh", n/100000);  n = n%100000;}
        if((n/1000)!=0)
          { printf(" %lld hajar", n/1000); n = n%1000;  }
        if((n/100)!=0)
          { printf(" %lld shata", n/100); n = n%100;  }
        if(n!=0)
           printf(" %lld",n);

        printf("\n");
    }
    return 0;
}
/*
19999999
109999999
1009999999
10009999999
100009999999
1000009999999
10000009999999
100000009999999
1000000000
1000099999
000001
00000101
0101
001000
001001
001011
1000
1001
1011
0
1
12
7000000000
999999999999999
101010101010101
010101010101010
100000000000001
000
900000000078467
900000000078000
900000000000000
101010101010101
010101010101010
100000000000001
23764
45897008973958
999999999999999
20034
000000088
9000000000
999999999999999
101010101010101
010101010101010
100000000000001
100000000000
000001
00000101
0101
001000
001001
001011
1000
1001
1011
0
1
12
100000010000000
100000000000000
1000000100000000
10000001000000000
762952003918195
23764
45897458973958
1
0
10
100
1000
10000
100000
1000000
10000000
100000000
1000000000
10000000000
100000000000
1000000000000
10000000000000
100000000000000
999999999999999
1
12
123
1000
23764
45897458973958
999999999999999
909090090909009
100000010000000
100000000000000
40000000040000
1
10
1000
10000
100000
10000000000000
999999999999999
45897458973958
23764
45897458973958
40000000040000
0
000000
0000
000000003
900000000000033
00000012121212
090000000999000
12100000000300
Outputs are:
   1. 1 kuti 99 lakh 99 hajar 9 shata 99
   2. 10 kuti 99 lakh 99 hajar 9 shata 99
   3. 1 shata kuti 99 lakh 99 hajar 9 shata 99
   4. 1 hajar kuti 99 lakh 99 hajar 9 shata 99
   5. 10 hajar kuti 99 lakh 99 hajar 9 shata 99
   6. 1 lakh kuti 99 lakh 99 hajar 9 shata 99
   7. 10 lakh kuti 99 lakh 99 hajar 9 shata 99
   8. 1 kuti kuti 99 lakh 99 hajar 9 shata 99
   9. 1 shata kuti
  10. 1 shata kuti 99 hajar 9 shata 99
  11. 1
  12. 1 shata 1
  13. 1 shata 1
  14. 1 hajar
  15. 1 hajar 1
  16. 1 hajar 11
  17. 1 hajar
  18. 1 hajar 1
  19. 1 hajar 11
  20. 0
  21. 1
  22. 12
  23. 7 shata kuti
  24. 9 kuti 99 lakh 99 hajar 9 shata 99 kuti 99 lakh 99 hajar 9 shata 99
  25. 1 kuti 1 lakh 1 hajar 10 kuti 10 lakh 10 hajar 1 shata 1
  26. 10 lakh 10 hajar 1 shata 1 kuti 1 lakh 1 hajar 10
  27. 1 kuti kuti 1
  28. 0
  29. 9 kuti kuti 78 hajar 4 shata 67
  30. 9 kuti kuti 78 hajar
  31. 9 kuti kuti
  32. 1 kuti 1 lakh 1 hajar 10 kuti 10 lakh 10 hajar 1 shata 1
  33. 10 lakh 10 hajar 1 shata 1 kuti 1 lakh 1 hajar 10
  34. 1 kuti kuti 1
  35. 23 hajar 7 shata 64
  36. 45 lakh 89 hajar 7 shata kuti 89 lakh 73 hajar 9 shata 58
  37. 9 kuti 99 lakh 99 hajar 9 shata 99 kuti 99 lakh 99 hajar 9 shata 99
  38. 20 hajar 34
  39. 88
  40. 9 shata kuti
  41. 9 kuti 99 lakh 99 hajar 9 shata 99 kuti 99 lakh 99 hajar 9 shata 99
  42. 1 kuti 1 lakh 1 hajar 10 kuti 10 lakh 10 hajar 1 shata 1
  43. 10 lakh 10 hajar 1 shata 1 kuti 1 lakh 1 hajar 10
  44. 1 kuti kuti 1
  45. 10 hajar kuti
  46. 1
  47. 1 shata 1
  48. 1 shata 1
  49. 1 hajar
  50. 1 hajar 1
  51. 1 hajar 11
  52. 1 hajar
  53. 1 hajar 1
  54. 1 hajar 11
  55. 0
  56. 1
  57. 12
  58. 1 kuti 1 kuti
  59. 1 kuti kuti
  60. 10 kuti 10 kuti
  61. 100 kuti 1 shata kuti
  62. 7 kuti 62 lakh 95 hajar 2 shata kuti 39 lakh 18 hajar 1 shata 95
  63. 23 hajar 7 shata 64
  64. 45 lakh 89 hajar 7 shata 45 kuti 89 lakh 73 hajar 9 shata 58
  65. 1
  66. 0
  67. 10
  68. 1 shata
  69. 1 hajar
  70. 10 hajar
  71. 1 lakh
  72. 10 lakh
  73. 1 kuti
  74. 10 kuti
  75. 1 shata kuti
  76. 1 hajar kuti
  77. 10 hajar kuti
  78. 1 lakh kuti
  79. 10 lakh kuti
  80. 1 kuti kuti
  81. 9 kuti 99 lakh 99 hajar 9 shata 99 kuti 99 lakh 99 hajar 9 shata 99
  82. 1
  83. 12
  84. 1 shata 23
  85. 1 hajar
  86. 23 hajar 7 shata 64
  87. 45 lakh 89 hajar 7 shata 45 kuti 89 lakh 73 hajar 9 shata 58
  88. 9 kuti 99 lakh 99 hajar 9 shata 99 kuti 99 lakh 99 hajar 9 shata 99
  89. 9 kuti 9 lakh 9 hajar 9 kuti 9 lakh 9 hajar 9
  90. 1 kuti 1 kuti
  91. 1 kuti kuti
  92. 40 lakh kuti 40 hajar
  93. 1
  94. 10
  95. 1 hajar
  96. 10 hajar
  97. 1 lakh
  98. 10 lakh kuti
  99. 9 kuti 99 lakh 99 hajar 9 shata 99 kuti 99 lakh 99 hajar 9 shata 99
 100. 45 lakh 89 hajar 7 shata 45 kuti 89 lakh 73 hajar 9 shata 58
 101. 23 hajar 7 shata 64
 102. 45 lakh 89 hajar 7 shata 45 kuti 89 lakh 73 hajar 9 shata 58
 103. 40 lakh kuti 40 hajar
 104. 0
 105. 0
 106. 0
 107. 3
 108. 9 kuti kuti 33
 109. 1 kuti 21 lakh 21 hajar 2 shata 12
 110. 90 lakh kuti 9 lakh 99 hajar
 111. 12 lakh 10 hajar kuti 3 shata
*/
