// Floyd's Cycle Detection Algorithm
// part 1 = detect if loop exist 
//         fast slow pointer approach
//         init fast and slow at head
//         move fast by 2 and slow by 1 unitl fast
//         becomes null or fast next becomes null
//         if fast nd slow becomes equal loop exit

// part 2 = if loops exists, remove loop
//         re initialize slow at head again, keep fast at same place
//         move slow and fast by 1 step, where they meet 
//         (lets call it i), that will be starting node

// part 3 = if loop exists, move loop
//         create temp at i
//         move temp until temp->next != i
//         then make temp->next = NULL, loop removed


        