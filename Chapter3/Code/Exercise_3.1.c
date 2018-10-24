int BinarySearch(int x, int v[]. int n)
{
  int low,high, mid;
  low = 0;
  high = n-1;
  mid=(high+low)/2;
  
  while(low <= high && x != v[mid])
  {
    
    if(x < v[mid])
      high = mid-1;
    else (x>v[mid])
      low=mid+1;
    mid = (low+high)/2;
  }
  if(x==v[mid])
    return mid;
  else
    return -1;
}

    
