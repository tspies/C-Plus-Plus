#include "Form.hpp"
#include "RobotomyRequestForm.hpp"

const int signValue = 72;
const int exeValue = 45;

RobotomyRequestForm::RobotomyRequestForm(void):
    Form("Clank", "Roboto", signValue, exeValue)
{
    return ;
}
RobotomyRequestForm::~RobotomyRequestForm(void)
{
    return ;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target):
    Form(target, "Roboto", signValue, exeValue)
{
    return ;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form):
    Form("Clank", "Roboto", signValue, exeValue)
{
    *this = form;
    return ;
}
RobotomyRequestForm &RobotomyRequestForm::operator= (const RobotomyRequestForm &)
{
    return (*this);
}
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    if (rand() % 1)
    {
        std::cout << "Drilling Noise... " << this->getTarget() << \
        " has been robotomized successfully" << std::endl;
    }
    else
    {
        std::cout << "Robotomized failed" << std::endl;
    }

}