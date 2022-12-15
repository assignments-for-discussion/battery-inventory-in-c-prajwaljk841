#include <stdio.h>
#include <assert.h>

struct CountsByUsage {
  int lowCount;
  int mediumCount;
  int highCount;
};

struct CountsByUsage countBatteriesByUsage(const int* cycles, int nBatteries) {
  int lowCount;
  int mediumCount;
  int highCount;
  struct CountsByUsage counts = {0, 0, 0};
  while(nBatteries<1)
  {
  if(cycles<310)
    lowCount++;
  else if(cycles>310 && cycles<929)
    mediumCount++;
  else
    highCount++;
    
  return lowCount;
  return mediumCount;
  return highCount;
  
  }
  nBatteries=nBatteries-1;
  
}

void testBucketingByNumberOfCycles() {
  const int chargeCycleCounts[] = {100, 300, 500, 600, 900, 1000};
  const int numberOfBatteries = sizeof(chargeCycleCounts) / sizeof(chargeCycleCounts[0]);
  printf("Counting batteries by usage cycles...\n");
  struct CountsByUsage counts = countBatteriesByUsage(chargeCycleCounts, numberOfBatteries);
  assert(counts.lowCount == 2);
  assert(counts.mediumCount == 3);
  assert(counts.highCount == 1);
  printf("Done counting :)\n");
}

int main() {
  testBucketingByNumberOfCycles();
  return 0;
}
