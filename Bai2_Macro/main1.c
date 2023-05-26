#include <stdio.h>

#define MAX 25

#if MAX <20

void test()
{
    printf ("MAX < 20\n");
}

#elif MAX == 20
void test()
{
    printf ("MAX == 20\n");
}

#else
void test()
{
    printf ("MAX > 20\n");
}

#endif // phải có cú pháp endif nếu không sẽ báo lỗi

int main()
{
    test();
    return 0;
}