# DSA---Phung-Quoc-Anh---ETTN---K70
DSA Homework from Ms. Hue

## Áp dụng hai thuật toán sắp xếp **Selection Sort** và **Insertion Sort** trên mảng cho sẵn

## Mảng đầu vào
`A[] = {101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59}`

## Mô tả chi tiết thuật toán qua Code
### 1. Selection Sort
* **Ý tưởng:** Duyệt qua mảng, tại mỗi vị trí `i` chọn phần tử nhỏ nhất trong đoạn chưa sắp xếp từ `i` đến `n - 1` và đổi chỗ về `A[i]`.
* **Phân tích từng đoạn code:**
  * `int min = i;`: Tạm thời coi phần tử đầu tiên của đoạn chưa sắp xếp là nhỏ nhất.
  * `for (int j = i + 1; j < n; ++j)`: Duyệt đoạn còn lại để tìm chỉ số chứa giá trị nhỏ nhất thực sự (`A[j] < A[min]`).
  * `int temp = A[i]; A[i] = A[min]; A[min] = temp;`: Đổi chỗ giá trị nhỏ nhất vừa tìm được với `A[i]`.

### 2. Insertion Sort
* **Ý tưởng:** Coi đoạn từ `0` đến `i - 1` là dãy đã sắp xếp, lấy phần tử `A[i]` (đặt là `chen`) chèn vào đúng vị trí của nó trong đoạn đã sắp xếp phía trước.
* **Phân tích từng đoạn code:**
  * `int chen = A[i];`: Lưu tạm giá trị cần chèn để tránh bị dịch chuyển đè mất.
  * `while (j >= 0 && A[j] > chen)`: Lùi ngược về đầu mảng, tìm các phần tử lớn hơn `chen`.
  * `A[j + 1] = A[j]; j--;`: Dịch phần tử lớn hơn sang phải 1 vị trí để tạo chỗ trống.
  * `A[j + 1] = chen;`: Đặt `chen` vào đúng vị trí thích hợp vừa tạo ra.
