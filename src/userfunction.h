#ifndef NSBML
#include <sbml/SBMLTypes.h>
#endif

#include "typex.h"
#include <set>

class UserFunction : public Module
{
private:
  Formula m_formula;

public:
  UserFunction(std::string name);
  ~UserFunction() {};

  bool SetFormula(const Formula& formula);
  Formula GetFormula() const {return m_formula;};
  std::string ToSBMLString() const;
  std::string GetAntimony(bool enableAnnotations = true) const;
  void FixNames();
  bool ChangeTimeToRef();
  bool UsesDistrib();

};

