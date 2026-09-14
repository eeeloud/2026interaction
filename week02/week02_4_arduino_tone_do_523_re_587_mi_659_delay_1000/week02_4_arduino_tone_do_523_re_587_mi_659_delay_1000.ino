// week02_4_arduino_tone_do_523_re_587_mi_659_delay_1000
void setup() { // 設定的函示, 只做一次, 不然太吵了
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  // 上面setup(), 只做一次
  tone(8, 523, 100); // Do 1秒
  delay(1000);
  tone(8, 587, 100); // Re 1秒
  delay(1000);
  tone(8, 659, 100); // Mi 1秒
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  // 下面會一直迴圈重複做、不會停
}
