int x=0;
int y=0;
int z=0;
int q=0;
int f=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly: 
  q = random(50);
  y = random(51, 100);
  z = random(101, 200);
  x = q + y;
  f = z - x;
  
  Serial.println(x);
  Serial.println(f);
  delay(2000);
  
}
