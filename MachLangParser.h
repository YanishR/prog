#ifndef __MACHLANGPARSER_H__
#define __MACHLANGPARSER_H__

using namespace std;

/* This class reads in a machine language representation of a MIPS
 * program.  If the file is correctly formatted (i.e. every line
 * contains a properly formatted 32 bit machine language/binary
 * representation of a supported MIPS instruction, this
 * class will retain a list of Instructions (one for each machine
 * language instruction from the file).  This list of Instructions
 * can be iterated through.
 */
class MachLangParser{
 public:

  // Specify a text file containing machine language/binary representations
  // of MIPS instructions.  This constructor checks the correctness of 
  // each line of the file to see if it is a 32 bit binary sequence that
  // represents a supported MIPS instruction.  If it does, a list of
  // Instructions is created and stored internally.  If it does not, then
  // the class will indicate that the file is incorrectly formatted.
  //
  MachLangParser(string input_file);

  // Destructor
  ~MachLachParser();

  // Returns true if the file specified was a valid/correct MIPS instruction
  // file.  Otherwise, returns false.
  bool isFormatCorrect();

  // Iterator that returns the next Instruction in the list of Instructions.
  Instruction getNextInstruction();

 private:
  string decode(string encoded);

  string decodeR(string encoded);
  string decodeI(string encoded);
  string decodeJ(string encoded);

};

#endif
