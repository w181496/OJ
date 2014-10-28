#include <stdio.h>
#include <math.h>

  #define    max(a, b)    ((a)>(b) ? (a) : (b))
  #define    min(a, b)    ((a)<(b) ? (a) : (b))
  #define EPS        (1e-6)

 typedef struct{
     double    x;
     double    y;
 }point_t;

  double directed_area(point_t A, point_t B, point_t C)
 {
     return fabs(A.x*B.y + B.x*C.y + C.x*A.y
             - A.x*C.y - B.x*A.y - C.x*B.y)/2;
 }

  int main()
 {
     point_t    A, B, C, tmp;
     double    left, right, up, low;
     int    i, j, cnt;    /* boder of rectangle */

     while( (EOF != scanf("%lf %lf %lf %lf %lf %lf",
                 &A.x, &A.y, &B.x, &B.y, &C.x, &C.y) )
             && !(0 == A.x && 0 == A.y && 0 == B.x && 0 == B.y && 0 == C.x && 0 == C.y) ){
         left = min(A.x, min(B.x, C.x) );
         right = max(A.x, max(B.x, C.x) );
         low = min(A.y, min(B.y, C.y) );
         up = max(A.y, max(B.y, C.y) );
         cnt = 0;
         for(i = max(1,left); i <= min(99,right); i++ )
             for(j = max(1,low); j <= min(99,up); j++ ){
                 double    res, S_ABC, S_OAB, S_OBC, S_OCA;
                 tmp.x = i; tmp.y = j;
                 S_ABC = directed_area(A, B, C );
                 S_OAB = directed_area(tmp, A, B );
                 S_OBC = directed_area(tmp, B, C );
                 S_OCA = directed_area(tmp, C, A );
                 res = fabs( S_ABC - S_OAB - S_OBC - S_OCA);
                 if( res <= EPS ){
                     if( S_ABC <= EPS ){    /* area = 0, Point A,B,C on a single line */
                         if( (tmp.x - left) >= 0 && (right - tmp.x) >= 0 )
                             cnt++;
                     }else
                         cnt ++;
                 }
             }
         printf("%4d\n", cnt );

     }
     return 0;
 }
