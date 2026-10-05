# DSA---Phung-Quoc-Anh---ETTN---K70
DSA Homework from Ms. Hue
# Bài tập Tháp Hà Nội
## Mô tả
Chương trình giải bài toán **Tháp Hà Nội** bằng C++ sử dụng phương pháp **đệ quy**.
Chương trình:
* Nhập số lượng đĩa `n`.
* Chuyển `n` đĩa từ cọc `A` sang cọc `C`, sử dụng cọc `B` làm trung gian.
* In ra từng bước di chuyển.
* In tổng số bước thực hiện.
## Thuật toán
Với `n` đĩa:
1. Chuyển `n - 1` đĩa từ cọc nguồn sang cọc trung gian.
2. Chuyển đĩa thứ `n` sang cọc đích.
3. Chuyển `n - 1` đĩa từ cọc trung gian sang cọc đích.
## Test case
### Test 1
**Input:**
```text
1
```
**Output:**
```text
Buoc 1: Chuyen dia 1 tu coc A sang coc C
Tong so buoc: 1
```
### Test 2
**Input:**
```text
2
```
**Output:**
```text
Buoc 1: Chuyen dia 1 tu coc A sang coc B
Buoc 2: Chuyen dia 2 tu coc A sang coc C
Buoc 3: Chuyen dia 1 tu coc B sang coc C
Tong so buoc: 3
```
### Test 3
**Input:**
```text
3
```
**Output:**
```text
Buoc 1: Chuyen dia 1 tu coc A sang coc C
Buoc 2: Chuyen dia 2 tu coc A sang coc B
Buoc 3: Chuyen dia 1 tu coc C sang coc B
Buoc 4: Chuyen dia 3 tu coc A sang coc C
Buoc 5: Chuyen dia 1 tu coc B sang coc A
Buoc 6: Chuyen dia 2 tu coc B sang coc C
Buoc 7: Chuyen dia 1 tu coc A sang coc C
Tong so buoc: 7 
