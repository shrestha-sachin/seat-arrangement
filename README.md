# Seating Reservation System

This project is a simple seating reservation system implemented in C. The program allows users to interactively book, cancel, or exit the reservation process. 
It manages a 5x5 grid of seats, showing their availability and keeping track of booked seats.

---

## Features

### 1. Seat Initialization
- The seating arrangement starts with all seats available (`[A]`).

### 2. Booking Seats
- Users can book multiple seats by specifying the row and column of each seat.
- Validations:
  - The seat must be within the valid range (0-4 for rows and columns).
  - The seat must not already be booked.

### 3. Canceling Seats
- Users can cancel a previously booked seat by entering its row and column.
- Validations:
  - The seat must be within the valid range.
  - The seat must already be booked.

### 4. Updated Seat Display
- After each booking or cancellation, the program displays the updated seating arrangement.
- The total number of available seats is shown.

### 5. Exit Option
- Users can exit the program by selecting the appropriate option.

---

## How to Use

### Input Options
- `0`: Book seats.
- `1`: Cancel a reserved seat.
- `2`: Exit the program.

### Booking Seats
1. Enter `0` to start booking.
2. Specify the number of seats to book.
3. For each seat:
   - Provide the row and column.
   - The program validates your input and books the seat.

### Canceling Seats
1. Enter `1` to cancel a seat.
2. Provide the row and column of the seat to cancel.
3. The program validates your input and cancels the seat if it was booked.

### Exiting the Program
- Enter `2` to exit. A farewell message will be displayed.

---

## Example Interaction

```plaintext
Available seats:
[A] [A] [A] [A] [A] 
[A] [A] [A] [A] [A] 
[A] [A] [A] [A] [A] 
[A] [A] [A] [A] [A] 
[A] [A] [A] [A] [A] 

Enter 0 to book, 1 to cancel, or 2 to exit: 0

How many seats do you want to reserve? 2

Enter the row for seat 1: 1
Enter the column for seat 1: 2
Enter the row for seat 2: 1
Enter the column for seat 2: 3

Available Seats: 23

Updated seats:
[A] [A] [A] [A] [A] 
[A] [A] [B] [B] [A] 
[A] [A] [A] [A] [A] 
[A] [A] [A] [A] [A] 
[A] [A] [A] [A] [A] 

Enter 0 to book, 1 to cancel, or 2 to exit: 2

Thanks for booking. Enjoy the movie!

# Constraints
The seating grid is fixed at 5x5 (25 seats total).
Row and column indices range from 0 to 4.
Users cannot book more seats than are available.
Input must be valid (e.g., 0, 1, or 2 for options, valid row/column indices).
