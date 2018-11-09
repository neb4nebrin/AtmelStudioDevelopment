## 標準I/Oレジスタ

`ATmega328P`で、`IN`/`OUT`命令が使えるI/Oレジスタの一覧を以下に示します。`LD`系/`ST`系命令を用いる場合は、SRAMのアドレスを用いなければなりません。また、I/Oアドレスが0x00から0x1fまでのレジスタは、`SBI`/`CBI`命令を用いて直接ビット操作が出来、`SBIS`/`SBIC`命令で比較操作が出来ます。

*注意：空欄は、`ATmega328P`のデータシートに記載がない事を示します。*

|SRAM addr.|I/O addr.|レジスタ名|名前|
|:--:|:--:|:--:|:--|
|0x20|&nbsp;|&nbsp;|&nbsp;|
|0x21|&nbsp;|&nbsp;|&nbsp;|
|0x22|&nbsp;|&nbsp;|&nbsp;|
|0x23|0x03|PINB|Port B Input Pins Address|
|0x24|0x04|DDRB|Port B Direction Register|
|0x25|0x05|PORTB|Port B Data Register|
|0x26|0x06|PINC|Port C Input Pins Address|
|0x27|0x07|DDRC|Port C Direction Register|
|0x28|0x08|PORTC|Port C Data Register|
|0x29|0x09|PIND|Port D Input Pins Address|
|0x2a|0x0a|DDRD|Port D Direction Register|
|0x2b|0x0b|PORTD|Port D Data Register|
|0x2c|&nbsp;|&nbsp;|&nbsp;|
|&nbsp;|&nbsp;|略|&nbsp;|
|0x34|&nbsp;|&nbsp;|&nbsp;|
|0x35|0x15|TIFR0|TC0 Interrupt Flag Register|
|0x36|0x16|TIFR1|TC1 Interrupt Flag Register|
|0x37|0x17|TIFR2|TC2 Interrupt Flag Register|
|0x38|&nbsp;|&nbsp;|&nbsp;|
|0x39|&nbsp;|&nbsp;|&nbsp;|
|0x3a|&nbsp;|&nbsp;|&nbsp;|
|0x3b|0x1b|PCIFR|Pin Change Interrupt Flag Register|
|0x3c|0x1c|EIFR|External Interrupt Flag Register|
|0x3d|0x1d|EIMSK|External Interrupt Mask Register|
|0x3e|0x1e|GPIOR0|General Purpose I/O Register 0|
|0x3f|0x1f|EECR|EEPROM Control Register|
|0x40|0x20|EEDR|EEPROM Data Register|
|0x41|0x21|EEARL|EEPROM Address Register Low|
|0x42|0x22|EEARH|EEPROM Address Register High|
|0x43|0x23|GTCCR|General Timer/Counter Control Register|
|0x44|0x24|TCCR0A|TC0 Control Register A|
|0x45|0x25|TCCR0B|TC0 Control Register B|
|0x46|0x26|TCNT0|TC0 Counter Value Register|
|0x47|0x27|OCR0A|TC0 Output Compare Register A|
|0x48|0x28|OCR0B|TC0 Output Compare Register B|
|0x49|&nbsp;|&nbsp;|&nbsp;|
|0x4a|0x2a|GPIOR1|General Purpose I/O Register 1|
|0x4b|0x2b|GPIOR2|General Purpose I/O Register 2|
|0x4c|0x2c|SPCR0|SPI Control Register 0|
|0x4d|0x2d|SPSR0|SPI Status Register 0|
|0x4e|0x2e|SPDR0|SPI Data Register 0|
|0x4f|&nbsp;|&nbsp;|&nbsp;|
|0x50|0x30|ACSR|Analog Comparator Control and Status Register|
|0x51|0x31|DWDR|debugWire Data Register|
|0x52|&nbsp;|&nbsp;|&nbsp;|
|0x53|0x33|SMCR|Sleep Mode Control Register|
|0x54|0x34|MCUSR|MCU Status Register|
|0x55|0x35|MCUCR|MCU Control Register|
|0x56|&nbsp;|&nbsp;|&nbsp;|
|0x57|0x37|SPMCSR|Store Program Memory Control and Status Register|
|0x58|&nbsp;|&nbsp;|&nbsp;|
|&nbsp;|&nbsp;|略|&nbsp;|
|0x5c|&nbsp;|&nbsp;|&nbsp;|
|0x5d|0x3d|SPL|Stack Pointer Register Low byte|
|0x5e|0x3e|SPH|Stack Pointer Register High byte|
|0x5f|0x3f|SREG|Status Register|




