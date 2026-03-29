# 1. RIGHT-ANGLE CHECKER  

## a. PSEUDOCODE

```Start

Declare angle1, angle2, angle3 as float

Display "Enter the first angle: "
Input angle1

Display "Enter the second angle: "
Input angle2

Set angle3 = 180.0 - (angle1 + angle2)

Display "Angles of the triangle:"
Display angle1
Display angle2
Display angle3

If angle1 <= 0 OR angle2 <= 0 OR angle3 <= 0 then
    Display "Invalid triangle."
Else if angle1 == 90.0 OR angle2 == 90.0 OR angle3 == 90.0 then
    Display "The triangle is a right-angled triangle."
Else
    Display "The triangle is not a right-angled triangle."
End if

Stop
```

## b. FLOWCHART

<img width="1322" height="1244" alt="1_flow" src="https://github.com/user-attachments/assets/aab49557-d9f8-447d-b9aa-cd237de95154" />

---


# 2. PALINDROME CHECKER

## a. PSEUDOCODE

```Start

Declare num, reversed, temp as unsigned long
Set reversed = 0

Display "Enter a number"
Input num

Set temp = num

While temp != 0 do
    Set reversed = (reversed × 10) + (temp mod 10)
    Set temp = temp ÷ 10   // integer division
End While

If num = reversed then
    Display "Number is a palindrome"
Else
    Display "Number is not a palindrome"
End If

Stop
```

## b. FLOWCHART

<img width="1137" height="1273" alt="image" src="https://github.com/user-attachments/assets/107f334e-2b52-4f90-9e76-0097139228c6" />

