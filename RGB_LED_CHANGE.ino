int B=10;
int G=9;
int R=11;
void setup (){
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}
void loop () {
int GV=random(0,255);
int BV=random(0,255);
int RV=random(0,255);
analogWrite(G,GV);
analogWrite(B,BV);
analogWrite(R,RV);
delay(1000); 
}