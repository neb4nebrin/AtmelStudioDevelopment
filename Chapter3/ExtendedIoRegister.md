## 拡張I/Oレジスタ

`ATmega328P`で、`IN`/`OUT`命令が使えないI/Oレジスタの一覧を以下に示します。これらは、`LD`系/`ST`系命令を用いてアクセスします。

*注意：空欄は、`ATmega328P`のデータシートに記載がない事を示します。*

|SRAM addr.|レジスタ名|名前|
|:--:|:--:|:--|
|0x60|WDTCSR|Watchdog Timer Control Register|
|0x61|CLKPR|Clock Prescaler Register|
|0x62|&nbsp;|&nbsp;|
|0x63|&nbsp;|&nbsp;|
|0x64|PRR|Power Reduction Register|
|0x65|&nbsp;|&nbsp;|
|0x66|OSCCAL|Oscillator Calibration Register|
|0x67|&nbsp;|&nbsp;|
|0x68|PCICR|Pin Change Interrupt Control Register|
|0x69|EICRA|External Interrupt Control Register A|
|0x6a|&nbsp;|&nbsp;|
|0x6b|PCMSK0|Pin Change Mask Register 0|
|0x6c|PCMSK1|Pin Change Mask Register 1|
|0x6d|PCMSK2|Pin Change Mask Register 2|
|0x6e|TIMSK0|TC0 Interrupt Mask Register|
|0x6f|TIMSK1|TC1 Interrupt Mask Register|
|0x70|TIMSK2|TC2 Interrupt Mask Register|
|0x71|&nbsp;|&nbsp;|
|&nbsp;|略|&nbsp;|
|0x77|&nbsp;|&nbsp;|
|0x78|ADCL|ADC Data Register Low|
|0x79|ADCH|ADC Data Register High|
|0x7a|ADCSRA|ADC Control and Status Register A|
|0x7b|ADCSRB|ADC Control and Status Register B|
|0x7c|ADMUX|ADC Multiplexer Selection Register|
|0x7d|&nbsp;|&nbsp;|
|0x7e|DIDR0|Digital Input Disable Register 0|
|0x7f|DIDR1|Digital Input Disable Register 1|
|0x80|TCCR1A|TC1 Control Register A|
|0x81|TCCR1B|TC1 Control Register B|
|0x82|TCCR1C|TC1 Control Register C|
|0x83|&nbsp;|&nbsp;|
|0x84|TCNT1L|TC1 Counter Value Low byte|
|0x85|TCNT1H|TC1 Counter Value High byte|
|0x86|ICR1L|TC1 Input Capture Register 1 Low byte|
|0x87|ICR1H|TC1 Input Capture Register 1 High byte|
|0x88|OCR1AL|TC1 Output Compare Register 1 A Low byte|
|0x89|OCR1AH|TC1 Output Compare Register 1 A High byte|
|0x8a|OCR1BL|TC1 Output Compare Register 1 B Low byte|
|0x8b|OCR1BH|TC1 Output Compare Register 1 B High byte|
|0x8c|&nbsp;|&nbsp;|
|&nbsp;|略|&nbsp;|
|0xaf|&nbsp;|&nbsp;|
|0xb0|TCCR2A|TC2 Control Register A|
|0xb1|TCCR2B|TC2 Control Register B|
|0xb2|TCNT2|TC2 Counter Value Register|
|0xb3|OCR2A|TC2 Output Compare Register A|
|0xb4|OCR2B|TC2 Output Compare Register B|
|0xb5|&nbsp;|&nbsp;|
|0xb6|ASSR|TC2 Asynchronous Status Register|
|0xb7|&nbsp;|&nbsp;|
|0xb8|TWBR|TWI Bit Rate Register|
|0xb9|TWSR|TWI Status Register|
|0xba|TWAR|TWI(Slave) Address Register|
|0xbb|TWDR|TWI Data Register|
|0xbc|TWCR|TWI Control Register|
|0xbd|TWAMR|TWI(Slave) Address Mask Register|
|0xbe|&nbsp;|&nbsp;|
|0xbf|&nbsp;|&nbsp;|
|0xc0|UCSR0A|USART Control and Status Register 0 A|
|0xc1|UCSR0B|USART Control and Status Register 0 B|
|0xc2|UCSR0C|USART Control and Status Register 0 C|
|0xc3|&nbsp;|&nbsp;|
|0xc4|UBRR0L|USART Baud Rate 0 Register Low|
|0xc5|UBRR0H|USART Baud Rate 0 Register High|
|0xc6|UDR0|USART I/O Data Register 0|
|0xc7|&nbsp;|&nbsp;|
|&nbsp;|略|&nbsp;|
|0xff|&nbsp;|&nbsp;|




