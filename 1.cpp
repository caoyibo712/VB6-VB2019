struct Xy{
      double x;
      double y;
}



class vector{
      public:
            vector operator+(vector& a,vector& b){
                  vector v;
                  v.Xy.x =a.Xy.x +b.Xy.x
                  v.Xy.y =a.Xy.y +b.Xy.y
                  return v;
            }
            vector operator-(vector& a,vector& b){
                  vector v;
                  v.Xy.x =a.Xy.x -b.Xy.x
                  v.Xy.y =a.Xy.y -b.Xy.y
                  return v;
            }

      private:
            Xy thisxy; 
}
