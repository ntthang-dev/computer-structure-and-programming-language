.ORIG x3000

; Nhập ký tự đầu tiên và lưu vào x5000
LD R0, PROMPT
PUTS
GETC
ST R0, x5000

; Nhập ký tự thứ hai và lưu vào x5001
LD R0, PROMPT
PUTS
GETC
ST R0, x5001

; Đọc ký tự từ x5000 và x5001
LD R1, x5000
LD R2, x5001

; Tính AND và lưu kết quả vào x5002
AND R3, R1, R2
ST R3, x5002

; Tính OR và lưu kết quả vào x5003
OR R3, R1, R2
ST R3, x5003

; Kết thúc chương trình
HALT

PROMPT .STRINGZ "Nhập ký tự: "
.END
