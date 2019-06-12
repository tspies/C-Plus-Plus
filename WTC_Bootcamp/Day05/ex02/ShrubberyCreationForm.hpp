#ifndef SHRUBBERYCREATIONFORM_HPP
 #define SHRUBBERYCREATIONFORM_HPP
 #include "Form.hpp"
 #include "Bureaucrat.hpp"
    class ShrubberyCreationForm : public Form
    {
        private:
            static int const _valueToSign;
            static int const _valueToExe;
        public:
            ShrubberyCreationForm(void);
            ShrubberyCreationForm(std::string target);
            ShrubberyCreationForm(const ShrubberyCreationForm &form);
            ~ShrubberyCreationForm();

            ShrubberyCreationForm &operator=(const ShrubberyCreationForm& obj);
            virtual void execute(Bureaucrat const &executor) const;
    };
#endif