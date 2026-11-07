char NAVI;
float chislo;
float des;
int fl = 8;
int sl = 9;
int tl = 10;
int fol = 11;
float bat;
int o;
int d;
int t;
int c;
int p;
int s;
int se;
int v;
int de;
int n;
float Lain;
float Wierd;
int enter;
int desiat;
float schot;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(fl, OUTPUT);
  pinMode(sl, OUTPUT);
  pinMode(tl, OUTPUT);
  pinMode(fol, OUTPUT);
  while(!Serial);
  Serial.println("Calculator");
  schot = 1.00;
  Schitaem();
}
void Schitaem () {
  Serial.println ("Пожалуйста вбейте первое число на кнопочной матрице");
  delay(3000);
  while (enter < 1000) {
  o = 0;
  d = 0;
  t = 0;
  c = 0;
  enter = analogRead(A8);
  digitalWrite(fl, LOW);
  digitalWrite(sl, LOW);
  digitalWrite(tl, LOW);
    digitalWrite(fl, HIGH);
    Serial.print("fl  ");
    delay(3000);
    o = analogRead(A6);
    d = analogRead(A4);
    t = analogRead(A2);
    c = analogRead(A0);
    delay(500);
    digitalWrite(fl, LOW);
    digitalWrite(sl, HIGH);
    Serial.print("sl  ");
    delay(3000);
    p = analogRead(A6);
    s = analogRead(A4);
    se = analogRead(A2);
    v = analogRead(A0);
    delay(500);
    digitalWrite(sl, LOW);
    digitalWrite(tl, HIGH);
    Serial.print("tl  ");
    delay(3000);
    de = analogRead(A6);
    n = analogRead(A4);
  enter = analogRead(A8);
  if (o > 1000){
    chislo = 1;
    Lain = (Lain * 10) + chislo;
    Serial.println(Lain);
  }
  if (d > 1000){
    chislo = 2;
    Lain = (Lain * 10) + chislo;
    Serial.println(Lain);
  }
  if (t > 1000){
    chislo = 3;
    Lain = (Lain * 10) + chislo;
    Serial.println(Lain);
  }
  if (c > 1000){
    chislo = 4;
    Lain = (Lain * 10) + chislo;
    Serial.println(Lain);
  }
  if (p > 1000){
    chislo = 5;
    Lain = (Lain * 10) + chislo;
    Serial.println(Lain);
  }
  if (s > 1000){
    chislo = 6;
    Lain = (Lain * 10) + chislo;
    Serial.println(Lain);
  }
  if (se > 1000){
    chislo = 7;
    Lain = (Lain * 10) + chislo;
    Serial.println(Lain);
  }
  if (v > 1000){
    chislo = 8;
    Lain = (Lain * 10) + chislo;
    Serial.println(Lain);
  }
  if (de > 1000){
    chislo = 9;
    Lain = (Lain * 10) + chislo;
    Serial.println(Lain);
  }
  if (n > 1000){
    chislo = 0;
    Lain = (Lain * 10) + chislo;
    Serial.println(Lain);
  }
  delay(3000);
  }
  Serial.println("Будет ли десятичная часть?");
  delay(3000);
  enter = 0;
  chislo = 0;
  des = 0;
  desiat = analogRead(A10);
  if (desiat > 1000) {
    Serial.println("Пожалуйста вбейте десятичную часть");
    while (enter < 1000) {
  o = 0;
  d = 0;
  t = 0;
  c = 0;
  enter = analogRead(A8);
  digitalWrite(fl, LOW);
  digitalWrite(sl, LOW);
  digitalWrite(tl, LOW);
    digitalWrite(fl, HIGH);
    Serial.print("fl  ");
    delay(3000);
    o = analogRead(A6);
    d = analogRead(A4);
    t = analogRead(A2);
    c = analogRead(A0);
    delay(500);
    digitalWrite(fl, LOW);
    digitalWrite(sl, HIGH);
    Serial.print("sl  ");
    delay(3000);
    p = analogRead(A6);
    s = analogRead(A4);
    se = analogRead(A2);
    v = analogRead(A0);
    delay(500);
    digitalWrite(sl, LOW);
    digitalWrite(tl, HIGH);
    Serial.print("tl  ");
    delay(3000);
    de = analogRead(A6);
    n = analogRead(A4);
  enter = analogRead(A8);
  if (o > 1000){
    chislo = 1;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  if (d > 1000){
    chislo = 2;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  if (t > 1000){
    chislo = 3;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  if (c > 1000){
    chislo = 4;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  if (p > 1000){
    chislo = 5;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  if (s > 1000){
    chislo = 6;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  if (se > 1000){
    chislo = 7;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  if (v > 1000){
    chislo = 8;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  if (de > 1000){
    chislo = 9;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  if (n > 1000){
    chislo = 0;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  delay(3000);
    }
    Lain = Lain + (des / schot);
  }
  Serial.print("1 число = ");
  Serial.println(Lain);
  o = 0;
  d = 0;
  t = 0;
  c = 0;
  digitalWrite(fl, LOW);
  digitalWrite(sl, LOW);
  digitalWrite(tl, LOW);
  enter = 0;
  schot = 1.00;
  des = 0;
  chislo = 0;
  desiat = 0;
  delay(1000);
  Serial.println ("Пожалуйста вбейте второе число на кнопочной матрице");
  delay(3000);
  while (enter < 1000) {
  o = 0;
  d = 0;
  t = 0;
  c = 0;
    digitalWrite(tl, LOW);
    digitalWrite(fl, HIGH);
    Serial.print("fl  ");
    delay(3000);
    o = analogRead(A6);
    d = analogRead(A4);
    t = analogRead(A2);
    c = analogRead(A0);
    delay(500);
    digitalWrite(fl, LOW);
    digitalWrite(sl, HIGH);
    Serial.print("sl  ");
    delay(3000);
    p = analogRead(A6);
    s = analogRead(A4);
    se = analogRead(A2);
    v = analogRead(A0);
    delay(500);
    digitalWrite(sl, LOW);
    digitalWrite(tl, HIGH);
    Serial.print("tl  ");
    delay(3000);
    de = analogRead(A6);
    n = analogRead(A4);
  
  enter = analogRead(A8);
  if (o > 1000){
    chislo = 1;
    Wierd = (Wierd * 10) + chislo;
    Serial.println(Wierd);
  }
  if (d > 1000){
    chislo = 2;
    Wierd = (Wierd * 10) + chislo;
    Serial.println(Wierd);
  }
  if (t > 1000){
    chislo = 3;
    Wierd = (Wierd * 10) + chislo;
    Serial.println(Wierd);
  }
  if (c > 1000){
    chislo = 4;
    Wierd = (Wierd * 10) + chislo;
    Serial.println(Wierd);
  }
  if (p > 1000){
    chislo = 5;
    Wierd = (Wierd * 10) + chislo;
    Serial.println(Wierd);
  }
  if (s > 1000){
    chislo = 6;
    Wierd = (Wierd * 10) + chislo;
    Serial.println(Wierd);
  }
  if (se > 1000){
    chislo = 7;
    Wierd = (Wierd * 10) + chislo;
    Serial.println(Wierd);
  }
  if (v > 1000){
    chislo = 8;
    Wierd = (Wierd * 10) + chislo;
    Serial.println(Wierd);
  }
  if (de > 1000){
    chislo = 9;
    Wierd = (Wierd * 10) + chislo;
    Serial.println(Wierd);
  }
  if (n > 1000){
    chislo = 0;
    Wierd = (Wierd * 10) + chislo;
    Serial.println(Wierd);
  }
  delay(3000);
  enter = analogRead(A8);
  }
  Serial.println("Будет ли десятичная часть?");
  delay (3000);
  enter = 0;
  chislo = 0;
  des = 0;
  digitalWrite(fl, LOW);
  digitalWrite(sl, LOW);
  digitalWrite(tl, LOW);
  desiat = analogRead(A10);
  if (desiat > 1000) {
    Serial.println("Пожалуйста вбейте десятичную часть");
    while (enter < 1000) {
  o = 0;
  d = 0;
  t = 0;
  c = 0;
    digitalWrite(tl, LOW);
    digitalWrite(fl, HIGH);
    Serial.print("fl  ");
    delay(3000);
    o = analogRead(A6);
    d = analogRead(A4);
    t = analogRead(A2);
    c = analogRead(A0);
    delay(500);
    digitalWrite(fl, LOW);
    digitalWrite(sl, HIGH);
    Serial.print("sl  ");
    delay(3000);
    p = analogRead(A6);
    s = analogRead(A4);
    se = analogRead(A2);
    v = analogRead(A0);
    delay(500);
    digitalWrite(sl, LOW);
    digitalWrite(tl, HIGH);
    Serial.print("tl  ");
    delay(3000);
    de = analogRead(A6);
    n = analogRead(A4);
  if (o > 1000){
    chislo = 1;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  if (d > 1000){
    chislo = 2;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  if (t > 1000){
    chislo = 3;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  if (c > 1000){
    chislo = 4;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  if (p > 1000){
    chislo = 5;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  if (s > 1000){
    chislo = 6;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  if (se > 1000){
    chislo = 7;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  if (v > 1000){
    chislo = 8;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  if (de > 1000){
    chislo = 9;
   des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  if (n > 1000){
    chislo = 0;
    des = (des * 10) + chislo;
    schot = schot * 10;
    Serial.println(des);
  }
  delay(3000);
  enter = analogRead(A8);
    }
    Wierd = Wierd + (des / schot);
  }
  Serial.print("2 число = ");
  Serial.println(Wierd);
  digitalWrite(fl, LOW);
  digitalWrite(sl, LOW);
  digitalWrite(tl, LOW);
  o = 0;
  d = 0;
  t = 0;
  c = 0;
  enter = 0;
  digitalWrite(fol, HIGH);
  delay(1000);
  Serial.println ("Пожалуйста выберите действие");
  delay(3000);
  o = analogRead(A6);
  d = analogRead(A4);
  t = analogRead(A2);
  c = analogRead(A0);
  if (o > 1000){
    NAVI = '+';
    digitalWrite(sl, LOW);
  }
  if (d > 1000){
    NAVI = '-';
    digitalWrite(sl, LOW);
  }
  if (t > 1000) {
    NAVI = '*';
  }
  if (c > 1000) {
    NAVI = '/';
  }
  Serial.println(NAVI);
  delay(1000);
  switch (NAVI) {
  case '+':
  bat = Lain + Wierd;
  break;
  case '-':
  bat = Lain - Wierd;
  break;
  case '*':
  bat = Lain * Wierd;
  break;
  case '/':
  if (Wierd == 0) {
    Serial.println("Ошибка, на ноль делить нельзя");
  } else {
  bat = Lain / Wierd;
  }
  break;
  }
  Serial.print(Lain); Serial.print(" "); Serial.print(NAVI); Serial.print(" "); Serial.print(Wierd); Serial.print(" = "); Serial.println(bat); Serial.print("Все соединены!");
}

void loop() {}
  // put your main code here, to run repeatedly:
