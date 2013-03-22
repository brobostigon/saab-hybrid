int x=0;
int y=0;
int z=0;
int q=0;
int f=0;
int led = 53;

void setup() {  
  Serial.begin(115200);
  pinMode(led, OUTPUT);
}

void loop() {
  q = random(50);
  y = random(51, 100);
  z = random(101, 200);
  x = q + y;
  f = z - x;

  Serial.println(x);
  Serial.println(f);
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}

