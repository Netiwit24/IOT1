int led = 13; //กำหนดให้ Node_LED แทนชื่อ digital I/O ขาที่ 2 ของ NodeMCU (Built in LED)
void setup() 
{
  // put your setup code here, to run once:
  pinMode(led,OUTPUT); //กำหนดให้ Node_LED มีรูปแบบการทำงานในโหมดเอาต์พุต
}

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);  //กำหนดให้ส่งสัญญาณเอาต์พุต HIGH (3.3V) ออกทางขา Node_LED 
  delay(200); //หน่วงเวลา 200 มิลลิวินาที
  digitalWrite(led,LOW); //กำหนดให้ส่งสัญญาณเอาต์พุต LOW (0V) ออกทางขา Node_LED 
  delay(200); //หน่วงเวลา 200 มิลลิวินาที

}
