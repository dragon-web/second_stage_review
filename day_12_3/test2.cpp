class UnusualAdd {
  public:
    int addAB(int A, int B) {
      int c = A & B;
      int r = A ^ B;
      return c == 0 ? r : addAB(r , c << 1);

    }

};
