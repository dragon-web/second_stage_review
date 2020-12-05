class LCA {
  public:
    int getLCA(int a, int b) {
      int max = a > b ? a : b;
      int min = a + b - max;

      if(max / 2 == min)
      {
        return min;

      }
      if(min == max)
      {
        return max/2;

      }
      else 
      {
        return getLCA(max /2 ,min);

      }

    }

};
