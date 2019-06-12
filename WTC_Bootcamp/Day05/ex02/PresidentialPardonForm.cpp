#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

const int signValue = 25;
const int exeValue = 5;

PresidentialPardonForm::PresidentialPardonForm(void):
    Form("Secret", "Presidential", signValue, exeValue)
{
    return ;
}
PresidentialPardonForm::~PresidentialPardonForm(void)
{
    return ;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target):
    Form(target, "Presidential", signValue, exeValue)
{
    return ;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form):
    Form("Secret", "Presidential", signValue, exeValue)
{
    *this = form;
    return ;
}
PresidentialPardonForm &PresidentialPardonForm::operator= (const PresidentialPardonForm &)
{
    return (*this);
}
void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}