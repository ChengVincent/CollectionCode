 
#################################################################
二分法查找是对一个有序序列查找的有效方法
#################################################################

int BinarySearch(int*array, int left, int right, int x)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (x<mid)
        {
            right = mid - 1;
        }
        else if (x>mid)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}



int _BinarySearch_R(SeqList* pSeq, int left, int right, DataType x)//递归
{
    //[)  0, size
    //[]  0, size -1
    assert(pSeq);
    if (left < right)
    {
        int mid = left + (right - left)/2;
        if (pSeq->array[mid] < x)
        {
            return _BinarySearch_R(pSeq, mid + 1, right, x);
        }
        else if(pSeq->array[mid] > x)
        {
            return _BinarySearch_R(pSeq, left, mid, x);
        }
        else
        {
            return mid;
        }
    }

    return -1;
}