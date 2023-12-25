// for()
console.log("Hello")

for(let i = 0; i < 4; i++) {
    let row = ""

    for (let k = 1; k <= i; k++) {
        row += '#';
    }
    for (let j = 4 - i; j > 0; j--) {
        row += ' ';
    }
    console.log(row)
}
for (let x = "+"; x.length < 5; x+= "+") {
    console.log(x)
}

const num = 8;

for(let a = 0; a < num; a++) {
    let hash = "";

    for(let y = num - a; y > 0; y--) {
        hash+= " ";
    }

    for(let x = 0; x < a; x++) {
        hash+="#";
    }

    console.log(hash)
}

// let size = 8;

// let board = "";

// for (let y = 0; y < size; y++) {

//   for (let x = 0; x < size; x++) {

//     if ((x + y) % 2 == 0) {
//         board += " ";
//     } else {
//         // console.log(x, y)
//       board += "#";
//     }
//   }
//   board += "\n";
// }


/* const char ALPHABET[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    const int ALPHABET_LENGTH = std::size(ALPHABET);
    const int POINTS[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

        const std::size_t ALPHABET_LENGTH = std::size(ALPHABET[0]);
        int string_iterator = 0;
        std::size_t ALPHABET_STR_LENGTH = ALPHABET[0][string_iterator].size();
        int char_index = 0;
            // ALPHABET_CHARACTER stores the current charatcer from ALPHABET e.g ALPHABET[0][0][0] == A;
        char ALPHABET_CHARACTER = ALPHABET[0][string_iterator][char_index]; // A
            // std::cout << word[index] << ALPHABET_CHARACTER << std::endl;

            while (word[index] != ALPHABET_CHARACTER && char_index < ALPHABET_STR_LENGTH) {
                score_points+= 0;
                char_index++;
                // Update the character based on the new index:
                ALPHABET_CHARACTER = ALPHABET[0][string_iterator][char_index];

                // when string characters array have been exhausted
                // update the string_iterator to move to the next string for check;
            if(char_index == ALPHABET_STR_LENGTH) {
                string_iterator++;
                ALPHABET_STR_LENGTH = ALPHABET[0][string_iterator].size();
            };
            }

            if(word[index] == ALPHABET_CHARACTER) {
                score_points+= POINTS[string_iterator];
            }
*/
