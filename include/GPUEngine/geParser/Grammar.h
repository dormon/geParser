#pragma once

#include<set>
#include<memory>
#include<GPUEngine/geParser/Export.h>
#include<GPUEngine/geParser/Symbol.h>
#include<GPUEngine/geParser/Term.h>
#include<GPUEngine/geParser/Nonterm.h>

namespace ge{
  namespace parser{
    GEPARSER_EXPORT bool prepareNonterms(std::set<std::shared_ptr<Nonterm>>const&allNonterms);
  }
}
