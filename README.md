# DS3231_launchpad
Arduino code to initialize a DS3231 RTC module

The aim of this project is to be able to use an aRDUINO as an RS232 serial terminal to communicate with a DS3231 Extremely Accurate I²C-Integrated RTC/TCXO/Crystal 

The program allows you to

1. View contents of all registers (19 in total 00h to 12h)
2. Set the Time, Date and Alarm
3. Display the current Time, Date and Alarm
4. Set the contents of any register of DS3231 (if allowed in HW)

This also has provision for automatic Day of Week calculation while setting the Date (you do not have to calculate DOW manually.

Product page : http://www.maximintegrated.com/en/products/digital/real-time-clocks/DS3231.html
