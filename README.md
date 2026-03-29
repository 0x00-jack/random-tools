# 1. RIGHT-ANGLE CHECKER  

# a. PSEUDOCODE

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

# b. FLOWCHART

<img width="1322" height="1244" alt="1_flow" src="https://github.com/user-attachments/assets/aab49557-d9f8-447d-b9aa-cd237de95154" />

---

