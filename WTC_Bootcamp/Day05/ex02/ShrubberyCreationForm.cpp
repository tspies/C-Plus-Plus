#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

const int signValue = 145;
const int exeValue = 137;

ShrubberyCreationForm::ShrubberyCreationForm(void):
    Form("Home", "Tree", signValue, exeValue)
{
    return ;
}
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    return ;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
    Form(target, "Tree", signValue, exeValue)
{
    return ;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form):
    Form("Home", "Tree", signValue, exeValue)
{
    *this = form;
    return ;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator= (const ShrubberyCreationForm &)
{
    return (*this);
}
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::ofstream file;

    file.open(this->getTarget() + "_shrubbery");
    if (file.fail())
    {
        std::cout << "Failed" << std::endl;
    }

    std::string tree = "       # #### ####\n
                            ### \\/#|### |/####\n
                            ##\\/#/ \\||/##/_/##/_#\n
                        ###  \\/###|/ \\/ # ###\n
                        ##_\\_#\\_\\## | #/###_/_####\n
                        ## #### # \\ #| /  #### ##/##\n
                        __#_--###`  |{,###---###-~\n
                                \\ }{\n
                                    }}{\n
                                    }}{\n
                                    {{}\n
                            , -=-~{ .-^- _\n
                                    `}\n
                                    {\n";
    file << tree << std::endl;
    return ;
}