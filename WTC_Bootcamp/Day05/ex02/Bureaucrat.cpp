#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

// Base Bureaucrat
Bureaucrat::~Bureaucrat(void)
{
    return ;
}
Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    *this = obj;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade > 150)
        throw(GradeTooLowException());
    else if (grade < 1)
        throw(GradeTooHighException());
    else
    {
        (std::string)this->_name = name;
        this->_grade = grade;
    }
    return ;
}
Bureaucrat &Bureaucrat::operator= (const Bureaucrat &obj)
{
    this->setName(obj._name);
    this->_grade = obj._grade;
    return (*this);
}
std::string Bureaucrat::getName(void) const
{
    return(this->_name);
}
int Bureaucrat::getGrade() const
{
    return (this->_grade);
}
void Bureaucrat::setName(std::string name)
{
    (std::string)this->_name = name;
}
void Bureaucrat::upGrade()
{
    if (this->_grade - 1 < 1)
        throw(GradeTooHighException());
    else
        this->_grade -= 1;
    return ;
}
void Bureaucrat::downGrade()
{
    if (this->_grade + 1 > 150)
        throw(GradeTooLowException());
    else
        this->_grade += 1;       
}
void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        if (this->getGrade() <= form.getSignGrade())
        {
            std::cout << this->_name << " signed the form: " << form.getName() << std::endl;
        }
        else
            std::cout << this->_name << " cannot sign form: " << form.getName() << \
            std::endl << " Bureaucrat grade is too low." << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
}
void Bureaucrat::exeForm(Form const &form)
{
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executes " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
//------------------------- Grade Too High ----------------------------------------------
Bureaucrat::GradeTooHighException::GradeTooHighException()
{
    return ;
}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
    return ;
}
Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &obj)
{
    *this = obj;
}
Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException &)
{
    return (*this);
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too HIGH!");
}

//---------------------Grade Too Low-----------------------------------------
Bureaucrat::GradeTooLowException::GradeTooLowException()
{
    return ;
}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
    return ;
}
Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &obj)
{
    *this = obj;
}
Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException &)
{
    return (*this);
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too LOW!");
}
// Ostream requirment

std::ostream &operator<<(std::ostream &ostream, const Bureaucrat &obj)
{
    ostream << "Bureaucrat -> " << obj.getName() << ": " << obj.getGrade() << std::endl;
    return ostream;
}