//add include statements

#include "func.h"

//add function code here

double get_gc_content(const std::string& dna) {
    int gc_count = 0;
    for (char nucleotide : dna) {
        if (nucleotide == 'C' || nucleotide == 'G') {
            ++gc_count;
        }
    }
    return static_cast<double>(gc_count) / dna.size();
}

std::string get_reverse_string(std::string dna) {
    std::string reversed;
    for (int i = dna.size() - 1; i >= 0; --i) {
        reversed += dna[i];
    }
    return reversed;
}

std::string get_dna_complement(std::string dna) {
    std::string reversed = get_reverse_string(dna);
    for (char& nucleotide : reversed) {
        switch (nucleotide) {
            case 'A': nucleotide = 'T'; break;
            case 'T': nucleotide = 'A'; break;
            case 'C': nucleotide = 'G'; break;
            case 'G': nucleotide = 'C'; break;
        }
    }
    return reversed;
}

