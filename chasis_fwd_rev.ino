// chasis forward, right, left, reverse
int m11=2;
int m12=3;
int m21=4;
int m22=5;

void setup() {
  pinMode(m11, OUTPUT);
  pinMode(m12, OUTPUT);
  pinMode(m21, OUTPUT);
  pinMode(m22, OUTPUT);

}

void loop() {
 digitalWrite(m11,1); digitalWrite(m12,0);
   digitalWrite(m21,1); digitalWrite(m22,0); //fwd
   delay(2000);

     digitalWrite(m11,1); digitalWrite(m12,0);
        digitalWrite(m21,0); digitalWrite(m22,1);  //rht
          delay(2000);

         digitalWrite(m11,0); digitalWrite(m12,1);
            digitalWrite(m21,1); digitalWrite(m22,0);   //rev
              delay(2000);

              digitalWrite(m11,0); digitalWrite(m12,1);
               digitalWrite(m21,0); digitalWrite(m22,1);   //lft
                  delay(2000);

}
