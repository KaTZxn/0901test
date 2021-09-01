/*※試験時間は90分です。
試験中にわからないこと(関数名やinclude名など)があれば、
ネットや本で調べてもらって構いません。
問題の意図が理解できない場合は先生に質問してもらって構いません。
他の生徒と会話することや、解答を見せてもらうことは禁止です。

試験時間80分を経過した時点で、gitにて提出を始めてください。
それまでは問題を解くか、別の作業をしてもかまいませんが、
試験時間80分未満での提出はできません。


第１問(一問2点)
以下の計算に2進数で答えよ。
00101100 + 01010101  10000001
10110000 + 00001111  10111111

第２問(一問2点)
第１問の答えを10進数で答えよ
129
191
第３問(一問2点)
char、int、float、doubleのバイトサイズはそれぞれいくつか答えよ。
char    1バイト
int     4バイト
float   4バイト
double  8バイト
第４問(一問2点)
char* 、int *、float * 、double * のバイトサイズはそれぞれいくつか答えよ。
char*   8バイト
int*    8バイト
float*  8バイト
double* 8バイト
第５問(20点)
以下のプログラムを実行した場合、
①～③のどの部分が実行されるか答えよ。
int main()
{
    int num = 5;

    num = num % 3;

    if (num == 0)
    {
        ①
    }
    else if (num == 2)
    {
        ②
    }
    else
    {
        ③
    }
}
③です

第６問(25点)
数値を2つ入力し、
1番目に入力された値が奇数なら足し算、
1番目に入力された値が偶数なら引き算を行うプログラムを作成せよ。

結果)
1 // 1番目に入力された値
5 // 2番目に入力された値
6 // 1番目が奇数なので足し算

4 // 1番目に入力された値
3 // 2番目に入力された値
1 // 1番目が偶数なので引き算



第７問(25点)
第６問のプログラムをループで行うようにし、
endと入力された場合終了するようにしてください。
endの入力は1番目の値の場所でも、2番目の値の場所でも、
別途endの入力を受け付けるようでもどれでもいいです。
どこか一か所でendと入力して終了していれば正解とします。*/

#include <stdio.h>
#include <string.h>
/*int main() {
    int a, b,ans = 0;
    char end[4] = {};
    bool isend = false;
    do {
        printf("数値を2つ入力し、1番目に入力された値が奇数なら足し算、1番目に入力された値が偶数なら引き算。\n"); 
        scanf_s("%d", &a);
        scanf_s("%d", &b);

        if (a % 2 != 0)
        {
            ans = a + b;
            printf("%d + %d = %d\n", a,b,ans);
        }
        else
        {
            ans = a - b;
            printf("%d - %d = %d\n", a,b,ans);
        }
        printf("endと入力された場合終了。\n");
        scanf_s("%s", end, 4);
        if (strcmp(end, "end") == 0)
        {
            isend = true;
            break;
        }
    } while (!isend);
}*/

/*第８問(10点)
以下のプログラムをエラーを解決し、コンパイルエラーがない状態にし、
実行できるようにしてください。
解答がエラー個所をコメントアウトして実行できるようにするのはNGです。
(途中確認のためにコメントアウトをする分はOKです。)
間違えている個所は4か所です。*/

class Point
{
    public:
        Point() { Clear(); }

        void Clear()
        {
            x = 0;
            y = 0;
            z = 0;
        }
    public:
        int x, y, z;
};

void main(){
    Point point;
    Point nextPoint;

    nextPoint.x = 100;
    nextPoint.y = 30;

    while (1)
    {
        if (point.x < nextPoint.x)
        {
            point.x++;
        }
        else if (point.x > nextPoint.x)
        {
            point.x--;
        }

        if (point.y < nextPoint.y)
        {
            point.y++;
        }
        else if (point.y > nextPoint.y)
        {
            point.y--;
        }
        printf("pointX = %d\n", point.x);
        printf("pointY = %d\n", point.y);

        if (point.x == nextPoint.x &&
            point.y == nextPoint.y)
        {
            break;
        }
    }
}


