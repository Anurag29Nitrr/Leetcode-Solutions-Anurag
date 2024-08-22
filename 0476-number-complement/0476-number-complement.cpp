class Solution {
public:
    int findComplement(int num) {
        // Convert the number to its binary representation
        std::string binary = std::bitset<32>(num).to_string();

        // Remove leading zeros
        binary = binary.substr(binary.find('1'));

        // Flip the bits
        for (char& bit : binary) {
            bit = (bit == '0') ? '1' : '0';
        }

        // Convert the binary string back to a decimal number
        int complement = std::stoi(binary, nullptr, 2);

        return complement;
    }
};
