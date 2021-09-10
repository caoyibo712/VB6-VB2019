struct Xy{
      double x;
      double y;
}



class vecter{
      public:
            vector operator+(vecter& a,vecter& b){
                  vecter v;
                  v.thisXy.x =a.thisXy.x +b.thisXy.x
                  v.thisXy.y =a.thisXy.y +b.thisXy.y
                  return v;
            }
            vector operator-(vecter& a,vecter& b){
                  vecter v;
                  v.thisXy.x =a.thisXy.x -b.thisXy.x
                  v.thisXy.y =a.thisXy.y -b.thisXy.y
                  return v;
            }

      private:
            Xy thisxy; 
}
