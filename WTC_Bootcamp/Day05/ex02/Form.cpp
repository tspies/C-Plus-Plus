#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form() : _is_signed(0), _signGrade(1), _exeGrade(1)
{
    return ;
}
Form::~Form()
{

}
Form::Form(std::string target, std::string name, int sign, int exe) :
    _name(name),
    _target(target),
    _is_signed(false),
    _signGrade(sign),
    _exeGrade(exe)
{
    return ;
}
Form &Form::operator=(const Form &obj)
{
    this->_name = obj.getName();
    this->_is_signed = obj.getIsSigned();
    return (*this);
}
std::string Form::getName(void) const
{
    return (this->_name);
}
std::string Form::getTarget(void) const
{
    return (this->_target);
}
int Form::getSignGrade(void) const
{
    return(this->_signGrade);
}
int Form::getExeGrade(void) const
{
    return(this->_exeGrade);
}
int Form::getIsSigned(void) const
{
    if (this->_is_signed == 1)
        return (1);
    else
        return(0);
}
void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->getSignGrade())
    {
        throw(GradeTooLowException()); 
    }
    else
    {
        this->_is_signed = true;
    }
}
void Form::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getExeGrade())
        throw(GradeTooLowException());
    else if (this->_is_signed == false)
        throw(NotSignedException());
}

//------------------------- Grade Too High ----------------------------------------------
Form::GradeTooHighException::GradeTooHighException()
{
    return ;
}
Form::GradeTooHighException::~GradeTooHighException() throw()
{
    return ;
}
Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &obj)
{
    *this = obj;
}
Form::GradeTooHighException &Form::GradeTooHighException::operator=(const GradeTooHighException &)
{
    return (*this);
}
const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too HIGH!");
}

//---------------------Grade Too Low-----------------------------------------
Form::GradeTooLowException::GradeTooLowException()
{
    return ;
}
Form::GradeTooLowException::~GradeTooLowException() throw()
{
    return ;
}
Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &obj)
{
    *this = obj;
}
Form::GradeTooLowException &Form::GradeTooLowException::operator=(const GradeTooLowException &)
{
    return (*this);
}
const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too LOW!");
}

//------------------------Not Signed------------------------------------------
Form::NotSignedException::NotSignedException()
{
    return ;
}
Form::NotSignedException::~NotSignedException() throw()
{
    return ;
}
Form::NotSignedException::NotSignedException(const NotSignedException &obj)
{
    *this = obj;
}
Form::NotSignedException &Form::NotSignedException::operator=(const NotSignedException &)
{
    return (*this);
}
const char *Form::NotSignedException::what() const throw()
{
    return ("Form is not signed!");
}
// ostream requirement
std::ostream &operator<<(std::ostream &ostream, const Form &obj)
{
    ostream << "Form -> " << obj.getName() << ": " << std::endl << \
     "Signed Grade: " << obj.getSignGrade() << std::endl << \
     "Execution Grade: " << obj.getExeGrade() << std::endl << \
     "Form Signed: " << obj.getIsSigned() << std::endl;
    return ostream;
}