#include <stdio.h>

int main(void) {
  // Declare variables
  int numScores;
  float score, total, average;

  // Get number of scores from user
  printf("Enter the number of scores: ");
  scanf("%d", &numScores);

  // Initialize total and average
  total = 0.0;
  average = 0.0;

  // Get scores and add to total
  for (int i = 0; i < numScores; i++) {
    printf("Enter score %d: ", i+1);
    scanf("%f", &score);
    total += score;
  }

  // Calculate average
  average = total / numScores;

  // Print average
  printf("The average score is: %.2f\n", average);

  return 0;
}
