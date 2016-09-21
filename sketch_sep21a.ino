void setup() {
  pinMode(2, OUTPUT); // menginisialisasi digital pin 2 sebagai output.
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH);   // Mengatur LED agar Menyala.
  delay(1500);              // Tunggu sampai 1,5 detik.
  digitalWrite(2, LOW);    // Mengatur LED agar Mati.
  delay(1500);              // Tunggu sampai 1,5 detik.
}
