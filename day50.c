#include <stdio.h>
#include <time.h>
#include <string.h>

int main() {
    char input_date_str[] = "25/04/2025"; // Example input date
    struct tm date_info;
    char output_date_str[20]; // Buffer for the formatted date string

    // Parse the input date string (dd/mm/yyyy) into a struct tm
    // %d for day, %m for month, %Y for year with century
    if (strptime(input_date_str, "%d/%m/%Y", &date_info) == NULL) {
        fprintf(stderr, "Error parsing date string.\n");
        return 1;
    }

    // Format the struct tm into the desired output format (dd-Apr-yyyy)
    // %d for day, %b for abbreviated month name, %Y for year with century
    strftime(output_date_str, sizeof(output_date_str), "%d-%b-%Y", &date_info);

    printf("Original date: %s\n", input_date_str);
    printf("Formatted date: %s\n", output_date_str);

    return 0;
}
