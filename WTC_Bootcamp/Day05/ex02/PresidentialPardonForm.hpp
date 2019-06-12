#ifndef PRESIDENTIALPARDONFORM_HPP
 #define PRESIDENTIALPARDONFORM_HPP
 #include "Form.hpp"
 #include "Bureaucrat.hpp"
    class PresidentialPardonForm : public Form
    {
        private:
            static int const _valueToSign;
            static int const _valueToExe;
        public:
            PresidentialPardonForm(void);
            PresidentialPardonForm(std::string target);
            PresidentialPardonForm(const PresidentialPardonForm &form);
            ~PresidentialPardonForm(void);

            PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
            virtual void execute(Bureaucrat const &executor) const;
    };
#endif