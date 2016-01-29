template <typename T>
int lower_bound(const T* a, int low, int high, const T& v) {
  while (low < high) {
    int mid = low + (high - low) / 2;
    if (a[mid] < v)
      low = mid +1;
    else
      high = mid ;
  }
  return low ;
}

template <typename T, typename Pred>
int lower_bound_pred(const T* a, int low, int high, Pred pred) {
  while (low < high) {
    int mid = low + (high - low) / 2;
    if (pred(a[mid]))
      low = mid +1;
    else
      high = mid ;
  }
  return low ;
}

int lower_bound_1(const int* a, int low, int high, const int& v) {
  return lower_bound(a,low,high,v);
}

int lower_bound_2(const int* a, int low, int high, const int& v) {
 auto pred = [&] (const int& x) { return x < v; };
 return lower_bound_pred(a,low,high,pred);
}
