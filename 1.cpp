struct Xy{
      double x;
      double y;
}



class vector{
      public:
            vector operator+(vector& a,vector& b){
                  vector v;
                  v.thisXy.x =a.thisXy.x +b.thisXy.x
                  v.thisXy.y =a.thisXy.y +b.thisXy.y
                  return v;
            }
            vector operator-(vector& a,vector& b){
                  vector v;
                  v.thisXy.x =a.thisXy.x -b.thisXy.x
                  v.thisXy.y =a.thisXy.y -b.thisXy.y
                  return v;
            }

      private:
            Xy thisxy; 
}
