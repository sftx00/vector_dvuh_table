#include <iostream>
#include <vector>

class MultiplicationTable {
public:
    MultiplicationTable(int rows, int cols) : rows(rows), cols(cols) {}

    std::vector<std::vector<int>> generateTable() {
        std::vector<std::vector<int>> table(rows, std::vector<int>(cols));

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                table[i][j] = (i + 1) * (j + 1);
            }
        }

        return table;
    }

    void printTabkle(const std::vector<std::vector<int>>& table) {
        for (const auto& row : table) {
            for (int cell : row) {
                std::cout << cell << "\t";
            }
            std::cout << std::endl;
        }
    }

private:
    int rows;
    int cols;
};

int main() {
    int numRows = 10;
    int numCols = 10;

    MultiplicationTable multiplicationTable(numRows, numCols);
    std::vector<std::vector<int>> table = multiplicationTable.generateTable();
    multiplicationTable.printTabkle(table);

    return 0;
}
