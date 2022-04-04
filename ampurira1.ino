int red=13;
int yellow=12;
int green =11;
int green1 =1;
int yellow1 =3;
int red1 =5;
  
void setup(){
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(green1,OUTPUT);
  pinMode(yellow1,OUTPUT);
  pinMode(red1,OUTPUT);
}

void loop(){ 
 digitalWrite(green,HIGH);
 digitalWrite(red1,HIGH);
 digitalWrite(green1,LOW);
 digitalWrite(red,LOW); 
 digitalWrite(yellow,LOW);
 digitalWrite(yellow1,LOW);
 delay(9000); 

  
     
  digitalWrite(yellow, HIGH);
  digitalWrite(yellow1,HIGH);
  digitalWrite(green, LOW);
  digitalWrite(green1,LOW);
  digitalWrite(red,LOW);
  digitalWrite(red1,LOW);
  delay(2000);   
  
  
  digitalWrite(red, HIGH); 
  digitalWrite(green1,HIGH);
  digitalWrite(red1,LOW);
  digitalWrite(green,LOW); 
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow,LOW);
  delay(9000);
  
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(red1,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green1,LOW);
  digitalWrite(yellow1,HIGH);
  delay(2000);
  
  

  
}
