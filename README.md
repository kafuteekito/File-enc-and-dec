**README**

### Run-Length Encoding (RLE) Compression and Decompression

#### Overview:
This project implements Run-Length Encoding (RLE) compression and decompression algorithms in C++. RLE is a simple form of lossless data compression where consecutive identical elements (characters in this case) are replaced with a single data value and count. 

#### Files:
1. **main.cpp**: Contains the implementation of RLE compression and decompression algorithms.
2. **input.txt**: Input file containing the data to be compressed or decompressed.
3. **output.txt**: Output file where compressed or decompressed data will be stored.
4. **README.md**: Documentation file explaining the project.

#### Compression Algorithm:
The compression algorithm `RunLengthEnc()` takes a string `str` as input and compresses it using RLE. It iterates through the input string, counts consecutive identical characters, and writes the character followed by its count to the output file. For example, if the input string is "AAABBCCCC", the compressed output will be "A3B2C4".

#### Decompression Algorithm:
The decompression algorithm `RunLengthDecr()` takes a string `str` as input and decompresses it using RLE. It iterates through the input string, reads the character and its count, and repeats the character according to its count in the output. For example, if the input string is "A3B2C4", the decompressed output will be "AAABBCCCC".

#### Major Functions:
1. **RunLengthEnc()**: Compresses the input string using RLE and writes the compressed data to the output file.
2. **RunLengthDecr()**: Decompresses the input string using RLE and writes the decompressed data to the output file.
3. **main()**: Handles file input/output operations, user input for selecting compression or decompression, and calls the appropriate functions accordingly.

#### Example Usage:
1. To compress data:
   - Place the data to be compressed in `input.txt`.
   - Compile and run the program.
   - Select compression option when prompted.
   - The compressed data will be stored in `output.txt`.

2. To decompress data:
   - Place the compressed data in `input.txt`.
   - Compile and run the program.
   - Select decompression option when prompted.
   - The decompressed data will be stored in `output.txt`.

#### Note:
- Ensure that `input.txt` exists and contains the data to be processed.
- Make sure you have necessary permissions to read from and write to files.
