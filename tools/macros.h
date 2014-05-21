#ifndef MACROS_H_PRDQMO5W
#define MACROS_H_PRDQMO5W

#define CPP_SAFE_DELETE(p)           do { if(p != NULL) { delete (p); (p) = NULL; } } while(false)
#define CPP_SAFE_DELETE_ARRAY(p)     do { if(p != NULL ) { delete[] (p); (p) = NULL; } } while(false)
#define CPP_SAFE_FREE(p)             do { if(p != NULL) { free(p); (p) = NULL; } } while(false)
#define CPP_BREAK_IF(cond)           if(cond) break


#define CPP_GETTER(varType, varName, funName)\
public: virtual varType get##funName(void) { return varName; }

#define CPP_GETTER_READONLY(varType, varName, funName)\
public: virtual varType get##funName(void) const { return varName; }

#define CPP_GETTER_READONLY_PASS_BY_REF(varType, varName, funName)\
public: virtual const varType& get##funName(void) const { return varName; }

#define CPP_SETTER(varType, varName, funName)\
public: virtual void set##funName(varType var){ varName = var; }

#define CPP_SETTER_PASS_BY_REF(varType, varName, funName)\
public: virtual void set##funName(const varType& var){ varName = var; }

#endif /* end of include guard: MACROS_H_PRDQMO5W */

