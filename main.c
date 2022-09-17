#include <stdio.h>

int Bin_Search(int *num,int cnt,int target,)
{
    int flag = 0;
    flag = Bin_Search(num,10,target);
    if(flag) printf("try %d,pos %d",flag);
    else printf("无该数字!!\n");
    int first = 0,last = cnt-1,mid;
    int counter = 0;
    while(first <= last)
    {
        counter ++;
        mid = (first + last) / 2;//确定中间元素
        if(num[mid] > target)
        {
            last = mid-1; //mid已经交换过了,last往前移一位
        }
        else if(num[mid] < target)
        {
            first = mid+1;//mid已经交换过了,first往后移一位
        }
        else //判断是否相等
        {
            printf("try %d,pos %d",counter,mid);
            return 1;
        }
    }
    printf("try %d,not found",counter);
    return 0;
}

int main(void)
{
    int target;
    int num[10] = {2,4,6,8,10,12,14,16,18,20};
        scanf("%d",&target);
    return 0;
}
